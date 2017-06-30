var m, n, r, q;

procedure gcd;
procedure print;
write(m);
begin
    while n <> 0 do
    begin
        q := m / n;
        r := m - q * n;
        m := n;
        n := r;
    end;
	call print;
end;
procedure print;
write(n);
begin
    read(m);
    read(n);
    if m < n then
        begin
            r := m;
            m := n;
            n := r;
        end;

    begin
        call gcd;
        write(m);
		call print;
    end;
end.
